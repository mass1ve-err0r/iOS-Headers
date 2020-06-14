//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, GEOPDLinkedService, NSArray, NSString, NSTimeZone;

@interface GEOLinkedService : NSObject
{
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    _Bool _checkedForBusinessHoursAlready;
    NSTimeZone *_timeZone;
    NSArray *_businessHours;
    NSString *_localizedCategoryName;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property(retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *localizedCategoryName; // @synthesize localizedCategoryName=_localizedCategoryName;
@property(retain, nonatomic) NSArray *businessHours; // @synthesize businessHours=_businessHours;
- (void).cxx_destruct;
- (id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2;

@end

