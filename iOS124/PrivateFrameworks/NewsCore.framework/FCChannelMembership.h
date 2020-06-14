//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSString, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject
{
    NTPBChannelMembershipRecord *_record;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBChannelMembershipRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *draftIssueListID;
@property(readonly, nonatomic) NSString *draftArticleListID;
@property(readonly, nonatomic) _Bool isAllowedToSeeDrafts;
@property(readonly, nonatomic) NSString *channelID;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end

