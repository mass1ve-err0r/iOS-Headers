//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKContentsContainerView : TLKStackView
{
    unsigned long long _style;
    NSMutableArray *_contentsViews;
}

@property(retain) NSMutableArray *contentsViews; // @synthesize contentsViews=_contentsViews;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateWithContents:(id)arg1;
- (id)init;

@end

