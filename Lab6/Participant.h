#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Data.h"
#include "Sortable.h"

class Participant: public Sortable{
    public:
    std::string name;
    int age;
    double score;

    static bool (*comp_cb)(const Participant*, const Participant*);

    Participant(const std::string& n, int a, double s) : name(n), age(a), score(s) {}


    // THIS ONE IS FOR TASK 4
    // bool compare(const Sortable* other) override {
    //     const Participant* otherParticipant = dynamic_cast<const Participant*>(other);
    //     if (otherParticipant) {
    //         if (score != otherParticipant->score)
    //             return score > otherParticipant->score;
    //         else if (age != otherParticipant->age)
    //             return age < otherParticipant->age;
    //         else
    //             return name < otherParticipant->name;
    //     }
    //     return false;
    // }

    // THIS ONE IS FOR TASK 5
    bool compare(const Sortable* other) override {
        const Participant* otherParticipant = dynamic_cast<const Participant*>(other);
        if (otherParticipant) {
            return comp_cb(this, otherParticipant);
        }
        return false; // If 'other' is not a Participant, return false
    }

    void print() override {
        std::cout << name << "\t" << age << "\t" << score << std::endl;
    }

    static void setComparisonFunction(bool (*func)(const Participant*, const Participant*)) {
        comp_cb = func;
    }




};