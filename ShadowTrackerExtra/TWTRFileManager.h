//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TWTRFileManager : NSObject
{
}

+ (id)pathForFileName:(id)arg1 inDirectory:(id)arg2;
+ (id)readDictionaryFromFileName:(id)arg1 inDirectory:(id)arg2;
+ (_Bool)writeDictionary:(id)arg1 toFileName:(id)arg2 inDirectory:(id)arg3;
+ (_Bool)createFileWithName:(id)arg1 inDirectory:(id)arg2;
+ (id)cacheDirectory;

@end

