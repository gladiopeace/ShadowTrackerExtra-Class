//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HSFaqDb : NSObject
{
    NSObject<OS_dispatch_queue> *workerQueue;
}

+ (id)getFaqListItemsForFaqs:(id)arg1;
+ (id)applyingNotOperator:(id)arg1 withTags:(id)arg2;
+ (id)applyingOrOperator:(id)arg1 withTags:(id)arg2;
+ (id)applyingAndOperator:(id)arg1 withTags:(id)arg2;
+ (id)filterFaqsFrom:(id)arg1 withTagsFilter:(id)arg2;
+ (id)filterFaqIdsFrom:(id)arg1 withTagsFilter:(id)arg2;
+ (void)deleteFaqWithPublishId:(id)arg1;
+ (void)clearData;
+ (_Bool)updateFaqWithId:(id)arg1 withIsHelpful:(int)arg2;
+ (id)getFaqIsHelpfulForId:(id)arg1;
+ (id)getFaqForId:(id)arg1;
+ (id)getFaqIdForPublishId:(id)arg1 andLanguage:(id)arg2;
+ (id)getFaqIdForPublishId:(id)arg1;
+ (id)getFaqForPublishId:(id)arg1 language:(id)arg2;
+ (id)getFaqForPublishId:(id)arg1;
+ (id)getAllFaqs;
+ (id)getFaqTitlesForSectionPublishId:(id)arg1;
+ (id)getFaqTitlesForSectionPublishId:(id)arg1 withTagsFilter:(id)arg2;
+ (id)getFaqsForSectionPublishId:(id)arg1;
+ (void)updateFaq:(id)arg1;
+ (void)storeFaq:(id)arg1 forSection:(id)arg2;
+ (void)storeFaqs:(id)arg1 forSection:(id)arg2;
+ (void)_updateFaq:(id)arg1;
+ (void)saveFaqs:(id)arg1 forSectionId:(id)arg2;
+ (void)_storeFaqs:(id)arg1 forSectionId:(id)arg2;
+ (id)doesExist:(id)arg1;
+ (id)sharedInstance;
+ (id)getJSONArrayFromColumnBlob:(const void *)arg1 withSize:(int)arg2;
+ (id)getStringFromColumnBlob:(const void *)arg1 withSize:(int)arg2;
- (void).cxx_destruct;

@end
