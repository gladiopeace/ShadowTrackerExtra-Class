//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLYBundle : NSObject
{
    NSString *_executableUUID;
    NSString *_executableBaseAddress;
    NSString *_executableArch;
    NSString *_customizedVersion;
    NSString *_customizedChannel;
    NSString *_bundleIdentifier;
    NSString *_bundleVer;
    NSString *_bundleBuild;
    NSString *_processName;
    NSString *_applicatiionName;
    NSString *_ciUUID;
}

+ (id)currentBundle;
@property(copy, nonatomic) NSString *ciUUID; // @synthesize ciUUID=_ciUUID;
@property(copy, nonatomic) NSString *applicatiionName; // @synthesize applicatiionName=_applicatiionName;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *bundleBuild; // @synthesize bundleBuild=_bundleBuild;
@property(copy, nonatomic) NSString *bundleVer; // @synthesize bundleVer=_bundleVer;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *customizedChannel; // @synthesize customizedChannel=_customizedChannel;
@property(copy, nonatomic) NSString *customizedVersion; // @synthesize customizedVersion=_customizedVersion;
@property(copy, nonatomic) NSString *executableArch; // @synthesize executableArch=_executableArch;
@property(copy, nonatomic) NSString *executableBaseAddress; // @synthesize executableBaseAddress=_executableBaseAddress;
@property(copy, nonatomic) NSString *executableUUID; // @synthesize executableUUID=_executableUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isVersionChanged) _Bool versionChanged;
- (void)loadExecutableInfo;
- (id)bundleExecutable;
- (id)bundleName;
- (id)fullBundleVersion;
- (id)objectValueFromInfoPlist:(id)arg1;
- (id)init;

@end

