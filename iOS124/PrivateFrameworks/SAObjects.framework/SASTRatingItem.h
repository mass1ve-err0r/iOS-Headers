//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SASTTemplateRating;

@interface SASTRatingItem : AceObject <SASTTemplateItem>
{
}

+ (id)ratingItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)ratingItem;
@property(retain, nonatomic) SASTTemplateRating *rating;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

