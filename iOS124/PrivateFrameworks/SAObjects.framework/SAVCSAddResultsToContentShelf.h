//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUIAddContentToView.h>

@class NSArray, NSString;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView
{
}

+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addResultsToContentShelf;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *results;
@property(nonatomic) long long pageNumber;
@property(copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property(copy, nonatomic) NSString *contentShelfViewId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

