//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (AttendeeSorting)
- (id)attendeesWithoutOrganizerAndLocations;
- (_Bool)hasHumanInviteesToDisplay;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
@end
