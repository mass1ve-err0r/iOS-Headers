//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView
{
}

+ (id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alternativeResultsView;
@property(copy, nonatomic) NSString *utterance;
@property(nonatomic) _Bool suggestedResult;
@property(retain, nonatomic) SAUIAddViews *resultView;
@property(nonatomic) long long rank;
@property(copy, nonatomic) NSString *dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

