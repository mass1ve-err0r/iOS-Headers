//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class NSObject, NSString, STRootViewModel, STUser;
@protocol STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

@protocol STRootViewModelCoordinator <NSObject>
@property(readonly, nonatomic, getter=isPasscodeEnabled) _Bool passcodeEnabled;
@property(nonatomic) _Bool hasAlreadyEnteredPINForSession;
@property(nonatomic) _Bool hasShownMiniBuddy;
@property(readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property(readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property(readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property(readonly, nonatomic) STRootViewModel *viewModel;
- (void)setShareWebUsageEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)enableScreenTimeWithPIN:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setPIN:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (_Bool)validatePIN:(NSString *)arg1;
- (id)coordinatorForChild:(STUser *)arg1;
@end

