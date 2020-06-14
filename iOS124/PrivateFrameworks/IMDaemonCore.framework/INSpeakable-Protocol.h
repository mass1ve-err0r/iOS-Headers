//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INSpeakable <NSObject>
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) NSString *spokenPhrase;

@optional
@property(readonly, nonatomic) NSString *identifier;
@end

