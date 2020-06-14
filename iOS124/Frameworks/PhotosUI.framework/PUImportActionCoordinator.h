//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, PUImportController, UIViewController;
@protocol PUImportActionCoordinatorDelegate;

@interface PUImportActionCoordinator : NSObject
{
    _Bool _presentsAdditionalDeleteAllConfirmation;
    _Bool _ppt_alwaysImportDuplicatesNoPrompt;
    _Bool _ppt_alwaysPreferSelected;
    id <PUImportActionCoordinatorDelegate> _delegate;
    UIViewController *_viewController;
    PUImportController *_importController;
    NSNumberFormatter *_percentageNumberFormatter;
}

+ (id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2;
+ (long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2;
+ (void)retrieveBatteryState:(long long *)arg1 batteryLevel:(float *)arg2;
+ (float)lowBatteryLevelThresholdForDevice;
@property(nonatomic) _Bool ppt_alwaysPreferSelected; // @synthesize ppt_alwaysPreferSelected=_ppt_alwaysPreferSelected;
@property(nonatomic) _Bool ppt_alwaysImportDuplicatesNoPrompt; // @synthesize ppt_alwaysImportDuplicatesNoPrompt=_ppt_alwaysImportDuplicatesNoPrompt;
@property(retain, nonatomic) NSNumberFormatter *percentageNumberFormatter; // @synthesize percentageNumberFormatter=_percentageNumberFormatter;
@property(retain, nonatomic) PUImportController *importController; // @synthesize importController=_importController;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool presentsAdditionalDeleteAllConfirmation; // @synthesize presentsAdditionalDeleteAllConfirmation=_presentsAdditionalDeleteAllConfirmation;
@property(nonatomic) __weak id <PUImportActionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_deleteItems:(id)arg1;
- (void)deleteItemsWithoutConfirmation:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2;
- (void)deleteItemsFromBarButtonItem:(id)arg1;
- (void)notifyDelegateOfImportCancellation;
- (void)_commitImportingItems:(id)arg1;
- (void)_importItems:(id)arg1 allowDuplicates:(_Bool)arg2;
- (void)stopImport;
- (void)checkBatteryLevelWithCompletion:(CDUnknownBlockType)arg1;
- (void)importAllFromBarButtonItem:(id)arg1;
- (void)beginImportFromBarButtonItem:(id)arg1;
- (id)initWithViewController:(id)arg1 importController:(id)arg2;

@end

