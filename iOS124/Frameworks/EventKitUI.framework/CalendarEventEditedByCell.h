//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;
@protocol EKCellShortener;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell
{
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned int _valuePlaceholder:2;
    id <EKCellShortener> _shortener;
}

@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_checkValueWidth;
- (_Bool)detailText2IsPlaceholder;
- (_Bool)detailTextIsPlaceholder;
- (void)setDetailText2IsPlaceholder:(_Bool)arg1;
- (void)setDetailTextIsPlaceholder:(_Bool)arg1;
@property(readonly, retain, nonatomic) UILabel *detailTextLabel2;
@property(readonly, retain, nonatomic) UILabel *textLabel2;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;

@end

