//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasIAPReportEventListener : NSObject
{
    NSString *_tag;
    double _beginTime;
    double _endTime;
    _Bool _removeAfterEnd;
    unsigned long long _beginType;
    NSString *_beginEvent;
    unsigned long long _endType;
    NSString *_endEvent;
}

+ (id)listenerWithTag:(id)arg1 beginEventType:(unsigned long long)arg2 beginEvent:(id)arg3 endEventType:(unsigned long long)arg4 endEvent:(id)arg5 removeAfterEnd:(_Bool)arg6;
@property(readonly, nonatomic) NSString *endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) unsigned long long endType; // @synthesize endType=_endType;
@property(readonly, nonatomic) NSString *beginEvent; // @synthesize beginEvent=_beginEvent;
@property(readonly, nonatomic) unsigned long long beginType; // @synthesize beginType=_beginType;
@property(readonly, nonatomic) _Bool removeAfterEnd; // @synthesize removeAfterEnd=_removeAfterEnd;
- (void).cxx_destruct;
- (void)appendToNextReport;
- (_Bool)processEvent:(id)arg1;
- (void)dealloc;
- (id)initWithTag:(id)arg1 beginEventType:(unsigned long long)arg2 beginEvent:(id)arg3 endEventType:(unsigned long long)arg4 endEvent:(id)arg5 removeAfterEnd:(_Bool)arg6;

@end
