//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject
{
    NSArray *_followedIssues;
    NSArray *_unreadFollowedIssues;
    NSArray *_autoFavoriteIssues;
    NSArray *_unbadgedIssues;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *unbadgedIssues; // @synthesize unbadgedIssues=_unbadgedIssues;
@property(retain, nonatomic) NSArray *autoFavoriteIssues; // @synthesize autoFavoriteIssues=_autoFavoriteIssues;
@property(retain, nonatomic) NSArray *unreadFollowedIssues; // @synthesize unreadFollowedIssues=_unreadFollowedIssues;
@property(retain, nonatomic) NSArray *followedIssues; // @synthesize followedIssues=_followedIssues;
- (void).cxx_destruct;

@end

