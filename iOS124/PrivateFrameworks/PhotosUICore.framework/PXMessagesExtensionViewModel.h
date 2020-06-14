//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableMessagesExtensionViewModel-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;
@protocol PXCMMSuggestion;

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel>
{
    _Bool _drawerActive;
    id <PXCMMSuggestion> _selectedSuggestion;
    NSURL *_selectedURL;
    unsigned long long _selectedActivityType;
    NSString *_selectedMessageText;
    NSDate *_selectedMessageDate;
    UIViewController *_presentedViewController;
    NSArray *_recipients;
}

+ (id)sharedRootViewModel;
@property(readonly, nonatomic, getter=isDrawerActive) _Bool drawerActive; // @synthesize drawerActive=_drawerActive;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) NSDate *selectedMessageDate; // @synthesize selectedMessageDate=_selectedMessageDate;
@property(readonly, copy, nonatomic) NSString *selectedMessageText; // @synthesize selectedMessageText=_selectedMessageText;
@property(readonly, nonatomic) unsigned long long selectedActivityType; // @synthesize selectedActivityType=_selectedActivityType;
@property(readonly, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(readonly, nonatomic) id <PXCMMSuggestion> selectedSuggestion; // @synthesize selectedSuggestion=_selectedSuggestion;
- (void).cxx_destruct;
- (void)setRecipients:(id)arg1;
- (void)clearSelection;
- (void)setSelectedMessageDate:(id)arg1;
- (void)setSelectedMessageText:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setDrawerActive:(_Bool)arg1;
- (void)setSelectedActivityType:(unsigned long long)arg1;
- (void)setSelectedURL:(id)arg1;
- (void)setSelectedSuggestion:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

