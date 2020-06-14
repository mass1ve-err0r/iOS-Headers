//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RELoggable-Protocol.h>

@class NSArray, NSString;
@protocol REElementDataSourceDelegate;

@interface REElementDataSource : NSObject <RELoggable>
{
    _Bool _running;
    _Bool _allowsLocationUse;
    _Bool _unlockedSinceBoot;
    id <REElementDataSourceDelegate> _delegate;
    unsigned long long _state;
    NSString *_logHeader;
}

+ (_Bool)wantsReloadForFirstDeviceUnlock;
+ (_Bool)wantsReloadForSignificantTimeChange;
+ (CDStruct_2ec95fd7)minimumSupportedSystemVersion;
+ (_Bool)supportsPersistence;
+ (_Bool)wantsLocationInUseAsserton;
+ (_Bool)wantsAppPrewarm;
+ (id)overrideLocalizedDataSourceName;
+ (id)overrideDataSourceImage;
+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (_Bool)wantsPrivateQueue;
+ (id)contentAttributes;
@property(readonly, nonatomic, getter=hasUnlockedSinceBoot) _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(readonly, nonatomic) NSString *logHeader; // @synthesize logHeader=_logHeader;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <REElementDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadLoggingHeader;
- (id)complicationDescriptor;
- (void)setUnlockedSinceBoot:(_Bool)arg1;
- (void)setRunning:(_Bool)arg1;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)resume;
- (void)pause;
- (void)getElementsInSection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *supportedSections;
- (id)init;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

