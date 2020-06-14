//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

@interface PSLargeTextSliderListController : PSListController
{
    PSSpecifier *_sliderGroupSpecifier;
    _Bool _viewIsDisappearing;
    _Bool _showsExtendedRangeSwitch;
    _Bool _usesExtendedRange;
    _Bool _showsLargerSizesHelpText;
    NSArray *_contentSizeCategories;
    long long _selectedCategoryIndex;
}

@property(nonatomic) _Bool showsLargerSizesHelpText; // @synthesize showsLargerSizesHelpText=_showsLargerSizesHelpText;
@property(nonatomic) _Bool usesExtendedRange; // @synthesize usesExtendedRange=_usesExtendedRange;
@property(nonatomic) _Bool showsExtendedRangeSwitch; // @synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch;
@property(nonatomic) long long selectedCategoryIndex; // @synthesize selectedCategoryIndex=_selectedCategoryIndex;
@property(copy, nonatomic) NSArray *contentSizeCategories; // @synthesize contentSizeCategories=_contentSizeCategories;
- (void).cxx_destruct;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initUsingExtendedRange:(_Bool)arg1;

@end

