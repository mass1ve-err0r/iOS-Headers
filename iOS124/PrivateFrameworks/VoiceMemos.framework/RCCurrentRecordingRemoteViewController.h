//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <VoiceMemos/RCUIClientCurrentRecordingViewController-Protocol.h>

@class NSString;
@protocol RCCurrentRecordingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController>
{
    id <RCCurrentRecordingViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
@property(nonatomic) __weak id <RCCurrentRecordingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)currentRecordingAVStateDidChange:(id)arg1;
- (void)currentRecordingDidEnd;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

