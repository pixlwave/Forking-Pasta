// Generated by IB v0.7.2 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <AudioToolbox/AudioToolbox.h>

@interface AppDelegate: UIResponder <UIApplicationDelegate>
-(IBAction) initialSetup;
-(IBAction) playChime;
-(IBAction) applicationWillTerminate:(id) application;

@end

@interface CategoryController: UITableViewController
-(IBAction) done;
-(IBAction) viewWillAppear:(id) animated;

@end

@interface EditCategoryController: UITableViewController

@property IBOutlet UIBarButtonItem * saveButton;

-(IBAction) viewDidLoad;
-(IBAction) save;
-(IBAction) cancel;
-(IBAction) nameDidChange:(id) sender;
-(IBAction) hideKeyboard;
-(IBAction) textFieldShouldReturn:(id) textField;
-(IBAction) numberOfSectionsInTableView:(id) tableView;

@end

@interface MainController: UIViewController

@property IBOutlet UIView * watchView;
@property IBOutlet UIImageView * clockImageView;
@property IBOutlet UILabel * periodNameLabel;
@property IBOutlet UILabel * timeRemainingLabel;

-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) viewDidAppear:(id) animated;
-(IBAction) viewWillDisappear:(id) animated;
-(IBAction) redraw;

@end

@interface PeriodDetailController: UITableViewController

@property IBOutlet UIBarButtonItem * saveButton;

-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) viewDidAppear:(id) animated;
-(IBAction) validate;
-(IBAction) cancel;
-(IBAction) nameDidChange:(id) sender;
-(IBAction) hideKeyboard;
-(IBAction) showDeleteConfirmation;
-(IBAction) deletePeriod;
-(IBAction) textFieldShouldReturn:(id) textField;
-(IBAction) numberOfSectionsInTableView:(id) tableView;

@end

@interface ScheduleController: UITableViewController
-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) viewWillDisappear:(id) animated;
-(IBAction) done;
-(IBAction) updateHintImageView;
-(IBAction) numberOfSectionsInTableView:(id) tableView;

@end

@interface ScheduleDaysController: UITableViewController
-(IBAction) save;
-(IBAction) cancel;

@end

@interface ScheduleDetailController: UITableViewController
-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) viewWillDisappear:(id) animated;
-(IBAction) save;
-(IBAction) updateHintImageView;
-(IBAction) showPeriodFromSegue:(UIStoryboardSegue*) sender;
-(IBAction) nameDidChange:(id) sender;
-(IBAction) notificationsSwitchDidChange:(id) sender;
-(IBAction) hideKeyboard;
-(IBAction) showDeleteConfirmation;
-(IBAction) deleteSchedule;
-(IBAction) textFieldShouldReturn:(id) textField;
-(IBAction) numberOfSectionsInTableView:(id) tableView;

@end

@interface SelectCategoryController: UITableViewController
@end

@interface SetTimeController: UIViewController

@property IBOutlet UISegmentedControl * timeIntervalControl;
@property IBOutlet UIDatePicker * timePicker;
@property IBOutlet UIButton * scheduleStartButton;
@property IBOutlet UIButton * scheduleEndButton;

-(IBAction) viewDidLoad;
-(IBAction) done;
-(IBAction) refreshTimeInterval;
-(IBAction) timeIntervalDidChange;
-(IBAction) jumpToTime:(id) sender;

@end

@interface WakeBedTimeController: UIViewController

@property IBOutlet UILabel * infoLabel;
@property IBOutlet UIDatePicker * timePicker;
@property IBOutlet UIImageView * imageView;

-(IBAction) viewDidLoad;
-(IBAction) done;

@end

@interface CategoryColorMark: UIView
-(IBAction) initWithFrame:(id) frame;
-(IBAction) initWithCoder:(id) aDecoder;
-(IBAction) color;
-(IBAction) drawRect:(id) rect;

@end

@interface CategoryColorCell: UITableViewCell

@property IBOutlet UILabel * colorNameLabel;
@property IBOutlet CategoryColorMark * colorMark;

@end

@interface CategoryNameCell: UITableViewCell

@property IBOutlet UITextField * nameTextField;

@end

@interface PeriodCategoryCell: UITableViewCell

@property IBOutlet UILabel * nameLabel;
@property IBOutlet CategoryColorMark * colorMark;

@end

@interface PeriodColorMark: UIView
-(IBAction) color;
-(IBAction) drawRect:(id) rect;

@end

@interface PeriodCell: UITableViewCell

@property IBOutlet PeriodColorMark * categoryColorMark;
@property IBOutlet UILabel * periodNameLabel;
@property IBOutlet UILabel * timeRangeLabel;

@end

@interface PeriodDayCell: UITableViewCell

@property IBOutlet UILabel * dayLabel;
@property IBOutlet UISwitch * daySwitch;

@end

@interface PeriodNameCell: UITableViewCell

@property IBOutlet UITextField * nameTextField;

@end

@interface ScheduleNotificationsCell: UITableViewCell

@property IBOutlet UISwitch * notificationsSwitch;

@end

@interface SelectCategoryCell: UITableViewCell

@property IBOutlet UILabel * nameLabel;
@property IBOutlet CategoryColorMark * colorMark;

@end

