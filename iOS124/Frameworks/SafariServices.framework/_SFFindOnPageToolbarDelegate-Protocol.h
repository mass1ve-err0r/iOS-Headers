//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol _SFFindOnPageToolbarDelegate
- (NSString *)longMatchLabelText;
- (NSString *)matchLabelText;
- (_Bool)hasMatches;
- (void)updateSearchText:(NSString *)arg1;
- (void)done;
- (void)next;
- (void)previous;
- (NSString *)textForToolbarLabel;
@end

