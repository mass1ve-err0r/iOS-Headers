//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSStorageTip.h>

@class NSObject, NSString;
@protocol PSStorageOptionTipDelegate;

@interface PSStorageOptionTip : PSStorageTip
{
    _Bool _mayCauseDataLoss;
    NSObject<PSStorageOptionTipDelegate> *_delegate;
    NSString *_confirmationText;
    NSString *_confirmationButtonTitle;
}

@property(retain) NSString *confirmationButtonTitle; // @synthesize confirmationButtonTitle=_confirmationButtonTitle;
@property(retain) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property _Bool mayCauseDataLoss; // @synthesize mayCauseDataLoss=_mayCauseDataLoss;
@property __weak NSObject<PSStorageOptionTipDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) long long eventualGain;
@property(nonatomic) long long immediateGain;
@property(retain, nonatomic) NSString *activatingString;
@property(nonatomic) float activationPercent;
@property(retain) NSString *enableButtonTitle;
- (id)getValue:(id)arg1;
- (void)setValue:(id)arg1 specifier:(id)arg2;
- (void)enableOption;
- (id)init;

@end

