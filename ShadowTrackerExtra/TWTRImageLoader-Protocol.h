//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol NSCopying;

@protocol TWTRImageLoader <NSObject>
- (void)cancelImageWithRequestID:(id <NSCopying>)arg1;
- (id <NSCopying>)fetchImageWithURL:(NSURL *)arg1 completion:(void (^)(UIImage *, NSError *))arg2;
@end

