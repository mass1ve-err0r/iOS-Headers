//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel
{
    ICMediaTime *_mediaTimeValue;
    ICMediaTimeFormatter *_formatter;
}

@property(retain, nonatomic) ICMediaTimeFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy, nonatomic) ICMediaTime *mediaTimeValue; // @synthesize mediaTimeValue=_mediaTimeValue;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

