//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GSDKCPU : NSObject
{
    NSMutableArray *_cpu_numList;
    NSMutableArray *_systemcpu_numList;
    NSMutableArray *_cpu_Dots;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *cpu_Dots; // @synthesize cpu_Dots=_cpu_Dots;
@property(retain, nonatomic) NSMutableArray *systemcpu_numList; // @synthesize systemcpu_numList=_systemcpu_numList;
@property(retain, nonatomic) NSMutableArray *cpu_numList; // @synthesize cpu_numList=_cpu_numList;
- (void).cxx_destruct;
- (double)getCPU;
- (double)getSystemCPUCircle;
- (void)getSystemCPU;
- (id)cpuDots;
- (id)resultCPU_noCollect;
- (id)resultCPU;
- (void)dealloc;
- (void)getCPUMessage;
- (void)startCPU;

@end
