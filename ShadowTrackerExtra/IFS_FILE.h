//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IFS_FILE : NSObject
{
    NSString *_url;
    NSString *_fileName;
    long long _fileSize;
}

@property long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

