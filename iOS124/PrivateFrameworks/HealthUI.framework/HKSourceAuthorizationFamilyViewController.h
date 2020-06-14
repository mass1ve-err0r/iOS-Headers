//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKClinicalSourceAuthorizationController, HKHealthStore, HKSource, HKSourceAuthorizationController, UIViewController;

@interface HKSourceAuthorizationFamilyViewController : HKTableViewController
{
    HKSource *_source;
    HKClinicalSourceAuthorizationController *_clinicalAuthorizationController;
    HKSourceAuthorizationController *_healthDataAuthorizationController;
    UIViewController *_clinicalAuthorizationSettingsViewController;
    UIViewController *_healthDataAuthorizationSettingsViewController;
    HKHealthStore *_healthStore;
}

@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) UIViewController *healthDataAuthorizationSettingsViewController; // @synthesize healthDataAuthorizationSettingsViewController=_healthDataAuthorizationSettingsViewController;
@property(retain, nonatomic) UIViewController *clinicalAuthorizationSettingsViewController; // @synthesize clinicalAuthorizationSettingsViewController=_clinicalAuthorizationSettingsViewController;
@property(retain, nonatomic) HKSourceAuthorizationController *healthDataAuthorizationController; // @synthesize healthDataAuthorizationController=_healthDataAuthorizationController;
@property(retain, nonatomic) HKClinicalSourceAuthorizationController *clinicalAuthorizationController; // @synthesize clinicalAuthorizationController=_clinicalAuthorizationController;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_valueStringForAnyCategoryEnabled:(_Bool)arg1;
- (id)_createFamilyCell;
- (void)_reloadAuthorizationSettings;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)init;

@end

