//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IMSDKKeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
    NSString *keychainIdentifier;
}

@property(retain, nonatomic) NSString *keychainIdentifier; // @synthesize keychainIdentifier;
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;
- (void).cxx_destruct;
- (void)writeToKeychain;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

