//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWSJSONBuilder : NSObject
{
}

+ (id)serializeMember:(id)arg1 value:(id)arg2 isPayloadType:(_Bool)arg3 error:(id *)arg4;
+ (id)serializeMap:(id)arg1 values:(id)arg2 error:(id *)arg3;
+ (id)serializeList:(id)arg1 values:(id)arg2 error:(id *)arg3;
+ (id)serializeStructure:(id)arg1 values:(id)arg2 error:(id *)arg3;
+ (id)buildJSONDictionary:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (id)jsonDataForDictionary:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (_Bool)failWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;

@end

