//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPeopleUISettings : PXSettings
{
    _Bool _alwaysShowBootstrap;
    _Bool _alwaysShowCandidateWidget;
    _Bool _alwaysShowMe;
    _Bool _displayBootstrapSuggestionType;
    _Bool _displayConfirmAdditionalSuggestionType;
    _Bool _displayConfirmationPhotoDate;
    _Bool _debugBlurredCells;
    _Bool _debugMaybeContact;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic, getter=shouldDebugMaybeContact) _Bool debugMaybeContact; // @synthesize debugMaybeContact=_debugMaybeContact;
@property(nonatomic, getter=shouldDebugBlurredCells) _Bool debugBlurredCells; // @synthesize debugBlurredCells=_debugBlurredCells;
@property(nonatomic, getter=shouldDisplayConfirmationPhotoDate) _Bool displayConfirmationPhotoDate; // @synthesize displayConfirmationPhotoDate=_displayConfirmationPhotoDate;
@property(nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) _Bool displayConfirmAdditionalSuggestionType; // @synthesize displayConfirmAdditionalSuggestionType=_displayConfirmAdditionalSuggestionType;
@property(nonatomic, getter=shouldDisplayBootstrapSuggestionType) _Bool displayBootstrapSuggestionType; // @synthesize displayBootstrapSuggestionType=_displayBootstrapSuggestionType;
@property(nonatomic, getter=shouldAlwaysShowMe) _Bool alwaysShowMe; // @synthesize alwaysShowMe=_alwaysShowMe;
@property(nonatomic, getter=shouldAlwaysShowCandidateWidget) _Bool alwaysShowCandidateWidget; // @synthesize alwaysShowCandidateWidget=_alwaysShowCandidateWidget;
@property(nonatomic, getter=shouldAlwaysShowBootstrap) _Bool alwaysShowBootstrap; // @synthesize alwaysShowBootstrap=_alwaysShowBootstrap;
- (void)setDefaultValues;
- (id)parentSettings;

@end

