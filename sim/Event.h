#pragma once


#define NS_SIM namespace sim{
#define NS_END } 

               
NS_SIM


class Time
{
public:

protected:
	long m_time;
};


class Event
{
public:
	virtual void Process()=0;
};


class EventList
{
public:

};


NS_END                                                                                                                    