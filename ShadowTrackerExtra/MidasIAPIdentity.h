//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MidasIAPIdentity : NSObject
{
    NSString *_name;
    unsigned long long _idType;
    NSString *_idNum;
    unsigned long long _provinceId;
    unsigned long long _cityId;
}

@property(nonatomic) unsigned long long cityId; // @synthesize cityId=_cityId;
@property(nonatomic) unsigned long long provinceId; // @synthesize provinceId=_provinceId;
@property(retain, nonatomic) NSString *idNum; // @synthesize idNum=_idNum;
@property(nonatomic) unsigned long long idType; // @synthesize idType=_idType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

