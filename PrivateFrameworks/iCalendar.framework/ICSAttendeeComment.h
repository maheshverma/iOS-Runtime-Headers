/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic, retain) NSString *x_calendarserver_attendee_ref;
@property (nonatomic, retain) ICSDateValue *x_calendarserver_dtstamp;

- (id)initWithComment:(id)arg1;
- (id)parametersToObscure;
- (void)setComment:(id)arg1;
- (void)setX_calendarserver_attendee_ref:(id)arg1;
- (void)setX_calendarserver_dtstamp:(id)arg1;
- (BOOL)shouldObscureValue;
- (id)x_calendarserver_attendee_ref;
- (id)x_calendarserver_dtstamp;

@end
