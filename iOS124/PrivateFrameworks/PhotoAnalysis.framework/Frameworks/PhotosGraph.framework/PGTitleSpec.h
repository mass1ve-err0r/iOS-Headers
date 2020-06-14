//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PGTitleSpecDelegate;

@interface PGTitleSpec : NSObject
{
    _Bool _hasLineBreak;
    NSString *_format;
    NSArray *_arguments;
    unsigned long long _weekdayCriteria;
    long long _titleCategory;
    id <PGTitleSpecDelegate> _delegate;
}

+ (long long)_weekdayForWeekdayCriteria:(unsigned long long)arg1;
+ (id)specWithFormat:(id)arg1 titleCategory:(long long)arg2;
@property __weak id <PGTitleSpecDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property unsigned long long weekdayCriteria; // @synthesize weekdayCriteria=_weekdayCriteria;
@property _Bool hasLineBreak; // @synthesize hasLineBreak=_hasLineBreak;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg1;
- (id)_appendArguments:(id)arg1 toFormatString:(id)arg2;
- (_Bool)_resolveRequiredInputForArgument:(id)arg1;
- (id)_titleWithResolvedArguments:(id)arg1;
- (id)titleWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)titleWithMomentNodes:(id)arg1;
- (id)initWithFormat:(id)arg1 titleCategory:(long long)arg2;

@end

