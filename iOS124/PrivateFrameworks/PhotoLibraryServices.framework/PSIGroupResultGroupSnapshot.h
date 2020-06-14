//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIDateFilter;

@interface PSIGroupResultGroupSnapshot : NSObject
{
    NSMutableArray *_tokens;
    NSMutableArray *_matchRanges;
    short _category;
    NSString *_contentString;
    NSString *_lookupIdentifier;
    PSIDateFilter *_dateFilter;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
}

@property(readonly, nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(readonly, nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) short category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) PSIDateFilter *dateFilter; // @synthesize dateFilter=_dateFilter;
@property(readonly, copy, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property(readonly, copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(readonly, retain, nonatomic) NSArray *matchRanges; // @synthesize matchRanges=_matchRanges;
@property(readonly, retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void)addMatchRange:(id)arg1;
- (void)addToken:(id)arg1;
- (void)dealloc;
- (id)initWithContentString:(id)arg1 token:(id)arg2 category:(short)arg3 lookupIdentifier:(id)arg4 dateFilter:(id)arg5 groupId:(unsigned long long)arg6 owningGroupId:(unsigned long long)arg7;

@end

