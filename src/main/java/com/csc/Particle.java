package com.csc;
import java.util.ArrayList;
import java.util.Random;

public class Particle
{
    void move(int trials, int steps)
    {
        ArrayList<Integer> positions;
        
        for(int i = 0; i < trials; i++){
            int currentPos = 0;
            for(int j = 0; j < steps; j++){
                Random rand = new Random();
                int randInt = rand.nextInt(2);
                if(randInt % 2 == 0){
                    currentPos++;
                } else {
                    currentPos--;
                }
            }
            positions.add(currentPos);
        }
        System.out.println(positions);
    }

    public static void main(String[] args)
    {
        Particle particle = new Particle();

        particle.move(2, 2);
    }

}