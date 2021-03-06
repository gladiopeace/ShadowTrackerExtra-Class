//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSURLRequestSerializer-Protocol.h"

@class NSDictionary, NSString;
@protocol AWSURLRequestSerializer;

@interface AWSS3RequestSerializer : NSObject <AWSURLRequestSerializer>
{
    NSDictionary *_serviceDefinitionJSON;
    NSString *_actionName;
    id <AWSURLRequestSerializer> _requestSerializer;
}

@property(retain, nonatomic) id <AWSURLRequestSerializer> requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSDictionary *serviceDefinitionJSON; // @synthesize serviceDefinitionJSON=_serviceDefinitionJSON;
- (void).cxx_destruct;
- (id)serializeRequest:(id)arg1 headers:(id)arg2 parameters:(id)arg3;
- (id)validateRequest:(id)arg1;
- (id)initWithJSONDefinition:(id)arg1 actionName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

