//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSDate, NSString, PXCMMSuggestionsDataSourceManager;
@protocol PXGadgetNavigating;

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    CDUnknownBlockType _pendingNavigationBlock;
    _Bool _didGenerateGadgets;
    id <PXGadgetNavigating> _gadgetNavigator;
    NSDate *_cachedPriorityDate;
}

@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(nonatomic) __weak id <PXGadgetNavigating> gadgetNavigator; // @synthesize gadgetNavigator=_gadgetNavigator;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)resetPriorityDate;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (_Bool)supportsDynamicRanking;
- (void)_updateGadgets;
- (void)_configureDataSourceManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

