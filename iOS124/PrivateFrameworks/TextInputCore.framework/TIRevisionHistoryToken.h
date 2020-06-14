//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIRevisionHistoryToken : NSObject
{
    _Bool _accepted;
    unsigned int _usageLearningMask;
    unsigned int _usageTrackingMask;
    NSString *_tokenInputString;
    unsigned long long _offset;
    struct TITokenID _tokenID;
    NSString *_tokenDictionaryString;
    NSString *_userTyping;
}

@property(nonatomic, getter=isAccepted) _Bool accepted; // @synthesize accepted=_accepted;
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=_usageTrackingMask;
@property(nonatomic) unsigned int usageLearningMask; // @synthesize usageLearningMask=_usageLearningMask;
@property(copy, nonatomic) NSString *userTyping; // @synthesize userTyping=_userTyping;
@property(copy, nonatomic) NSString *tokenDictionaryString; // @synthesize tokenDictionaryString=_tokenDictionaryString;
@property(nonatomic) struct TITokenID tokenID; // @synthesize tokenID=_tokenID;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *tokenInputString; // @synthesize tokenInputString=_tokenInputString;
- (void).cxx_destruct;
- (id)description;

@end

