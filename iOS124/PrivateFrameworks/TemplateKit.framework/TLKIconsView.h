//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKIconsView : TLKStackView
{
    NSMutableArray *_imageViews;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)updateIcons:(id)arg1;
- (id)init;

@end

