//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@interface GtalkClientEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasMcsReconnectAction; // @dynamic hasMcsReconnectAction;
@property(nonatomic) _Bool hasNetworkPort; // @dynamic hasNetworkPort;
@property(nonatomic) _Bool hasNetworkType; // @dynamic hasNetworkType;
@property(nonatomic) _Bool hasNumberDiscardedEvents; // @dynamic hasNumberDiscardedEvents;
@property(nonatomic) _Bool hasTimeConnectionEndedMs; // @dynamic hasTimeConnectionEndedMs;
@property(nonatomic) _Bool hasTimeConnectionEstablishedMs; // @dynamic hasTimeConnectionEstablishedMs;
@property(nonatomic) _Bool hasTimeConnectionStartedMs; // @dynamic hasTimeConnectionStartedMs;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int mcsReconnectAction; // @dynamic mcsReconnectAction;
@property(nonatomic) int networkPort; // @dynamic networkPort;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(nonatomic) unsigned int numberDiscardedEvents; // @dynamic numberDiscardedEvents;
@property(nonatomic) unsigned long long timeConnectionEndedMs; // @dynamic timeConnectionEndedMs;
@property(nonatomic) unsigned long long timeConnectionEstablishedMs; // @dynamic timeConnectionEstablishedMs;
@property(nonatomic) unsigned long long timeConnectionStartedMs; // @dynamic timeConnectionStartedMs;
@property(nonatomic) int type; // @dynamic type;

@end

