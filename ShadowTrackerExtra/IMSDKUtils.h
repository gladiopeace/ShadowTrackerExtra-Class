//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMSDKUtils : NSObject
{
}

+ (_Bool)isPureInt:(id)arg1;
+ (_Bool)swizzlingOriginalClass:(Class)arg1 SwizzledClass:(Class)arg2 OriginalSEL:(SEL)arg3 SwizzledSEL:(SEL)arg4;
+ (void)convert2ShortUrl:(id)arg1 urlTypeMark:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)convert2ShortUrl:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)convertMessage:(id)arg1 link:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)convertLink:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)getGenUrl;
+ (void)resetLoginDataForChannel:(id)arg1;
+ (id)getLoginDataForChannel:(id)arg1;
+ (void)saveLoginData:(id)arg1 forChannel:(id)arg2;
+ (void)loadImagaWithUri:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)getMonitoEventIDWithModule:(id)arg1 withChannel:(id)arg2 withFunction:(id)arg3;
+ (id)getUUID:(_Bool)arg1;
+ (id)jsonStringFromArray:(id)arg1 prettyPrint:(_Bool)arg2;
+ (id)jsonStringFromDict:(id)arg1 prettyPrint:(_Bool)arg2;
+ (id)dictFromJsonString:(id)arg1;
+ (id)parseURLRequestParam:(id)arg1;
+ (id)getCurrentRootViewController;
+ (id)getValidParam:(id)arg1 postData:(id)arg2 gameID:(id)arg3 channel:(id)arg4 encodeParams:(_Bool)arg5;
+ (id)getValidParam:(id)arg1 postData:(id)arg2 gameID:(id)arg3 channel:(id)arg4;
+ (id)getFomattHttpResultDict:(id)arg1;
+ (id)getIPAddress;
+ (id)getDeviceModel;
+ (void)resetAppSetting;
+ (void)updateAppSetting:(id)arg1;
+ (id)getAppPlistInfo;

@end

