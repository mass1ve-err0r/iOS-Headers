//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccountPreferences;

@interface PKAccountWebServicePreferencesResponse : PKAccountWebServiceResponse
{
    PKAccountPreferences *_preferences;
}

@property(readonly, copy, nonatomic) PKAccountPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

