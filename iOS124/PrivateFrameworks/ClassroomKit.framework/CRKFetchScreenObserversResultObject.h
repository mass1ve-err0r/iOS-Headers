//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchScreenObserversResultObject : CATTaskResultObject
{
    NSDictionary *_observingInstructorIdentifiersByCourseCourseIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseCourseIdentifiers; // @synthesize observingInstructorIdentifiersByCourseCourseIdentifiers=_observingInstructorIdentifiersByCourseCourseIdentifiers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

