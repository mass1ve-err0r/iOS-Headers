//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSmartQuoteOptions;
@protocol NSSmartPunctuationClient;

@interface NSSmartPunctuationController : NSObject
{
    id <NSSmartPunctuationClient> _client;
    NSSmartQuoteOptions *_options;
    unsigned long long _types;
}

- (void)clientDidReplaceRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
@property id <NSSmartPunctuationClient> client;
@property _Bool smartDashesEnabled;
@property _Bool smartQuotesEnabled;
@property(copy) NSSmartQuoteOptions *smartQuoteOptions;
- (void)dealloc;
- (id)init;

@end

