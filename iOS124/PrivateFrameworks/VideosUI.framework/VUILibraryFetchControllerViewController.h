//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUILocalContentProtocol-Protocol.h>

@class NSArray, NSString, UIView, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUILibraryFetchControllerViewController : UIViewController <VUILocalContentProtocol>
{
    _Bool _onlyShowLocalContent;
    _Bool _pausesFetchControllersAutomatically;
    _Bool _contentHasBeenDeleted;
    _Bool _contentHasBeenManuallyDeleted;
    VUIMediaLibrary *_mediaLibrary;
    NSArray *_fetchControllers;
    UIView *_currentView;
    unsigned long long _currentViewType;
    NSString *_noContentErrorTitle;
    NSString *_noContentErrorMessage;
    NSString *_deletedContentErrorMessage;
    UIView *_contentView;
    UIView *_rootView;
}

@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *deletedContentErrorMessage; // @synthesize deletedContentErrorMessage=_deletedContentErrorMessage;
@property(nonatomic) _Bool contentHasBeenManuallyDeleted; // @synthesize contentHasBeenManuallyDeleted=_contentHasBeenManuallyDeleted;
@property(nonatomic) _Bool contentHasBeenDeleted; // @synthesize contentHasBeenDeleted=_contentHasBeenDeleted;
@property(copy, nonatomic) NSString *noContentErrorMessage; // @synthesize noContentErrorMessage=_noContentErrorMessage;
@property(copy, nonatomic) NSString *noContentErrorTitle; // @synthesize noContentErrorTitle=_noContentErrorTitle;
@property(nonatomic) unsigned long long currentViewType; // @synthesize currentViewType=_currentViewType;
@property(nonatomic) _Bool pausesFetchControllersAutomatically; // @synthesize pausesFetchControllersAutomatically=_pausesFetchControllersAutomatically;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) _Bool onlyShowLocalContent; // @synthesize onlyShowLocalContent=_onlyShowLocalContent;
- (void).cxx_destruct;
- (id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateAfterContentWasManuallyDeleted:(_Bool)arg1;
- (void)startFetchControllers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;

@end

