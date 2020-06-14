//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIActivity.h>

@class NSArray, UIViewController, _UIActivityUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivity : UIActivity
{
    NSArray *_availableActivities;
    _UIActivityUserDefaults *_userDefaults;
    UIViewController *_presentableActivityViewController;
}

@property(retain, nonatomic) UIViewController *presentableActivityViewController; // @synthesize presentableActivityViewController=_presentableActivityViewController;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *availableActivities; // @synthesize availableActivities=_availableActivities;
- (void).cxx_destruct;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_cleanup;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityViewController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithUserDefaults:(id)arg1;

@end

