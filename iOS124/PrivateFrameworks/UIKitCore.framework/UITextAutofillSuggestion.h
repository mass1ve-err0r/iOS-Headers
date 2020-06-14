//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextSuggestion.h>

@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion
{
    NSString *_username;
    NSString *_password;
}

+ (id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end

