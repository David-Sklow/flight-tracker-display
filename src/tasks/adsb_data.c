/**
 * This task is responsible for querying ADSB data from an API. 
 * A packet queue system will be defined for sending and recieving data to other necessary functions
 * 
 * Every 5 minutes, poll all commercial flights in a 30 mile radius. If none are there, return a value indicating this (display will convey this)
 * 
 */