#include"LoginForm.h"
#include"MainForm.h"
#include"RegisterForm.h"
#include"Analytics.h"
#include"BloodDisorders.h"
#include"BloodFacts.h"
#include"BloodRequest.h"
#include"ContactUs.h"
#include"Leaderboard.h"
#include"ThingsToKnow.h"
#include"Visit.h"
#include"Compatibility.h"
#include"ProfileForm.h"

//Backup

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);						//	dekhna hai

	User^ user = nullptr;
	while (true) {
		Testing::LoginForm loginform;
		loginform.ShowDialog();

		if (loginform.switchToRegister) {
			Testing::RegisterForm registerform;
			registerform.ShowDialog();

			if (registerform.switchToLogin) {
				continue;
			}
			else {
				user = registerform.user;
				break;
			}

		}
		else {
			user = loginform.user;
			break;
		}
	}

	if (user != nullptr) {
		while (true) {
			Testing::MainForm mainform(user), analytics(user), bloodreq(user), leaderboard(user), bloodfacts(user), thingstoknow(user), blooddisorders(user),
				bookavisit(user), contactus(user), compatibility(user), profile(user);
			mainform.ShowDialog();

			if (mainform.endProgram) {
				break;
			}
			// Blood Requests
			if (mainform.switchToBloodRequests) {
				Testing::BloodRequest bloodreq;
				bloodreq.ShowDialog();

				if (bloodreq.switchToMainForm) {
					continue;
				}
			}

			//Analytics
			if (mainform.switchToAnalytics) {
				Testing::Analytics analytics;
				analytics.ShowDialog();

				if (analytics.switchToMainForm) {
					continue;
				}
			}

			//Leaderboard
			if (mainform.switchToLeaderboard) {
				Testing::Leaderboard leaderboard;
				leaderboard.ShowDialog();

				if (leaderboard.switchToMainForm) {
					continue;
				}
			}
			

			//Blood Facts
			if (mainform.switchToBloodFacts) {
				Testing::BloodFacts bloodfacts;
				bloodfacts.ShowDialog();

				if (bloodfacts.switchToMainForm) {
					continue;
				}
				
			}
			

			//Things to Know
			if (mainform.switchToABD) {
				Testing::ThingsToKnow thingstoknow;
				thingstoknow.ShowDialog();

				if (thingstoknow.switchToMainForm) {
					continue;
				}
				
			}
			

			//Blood Disorders
			if (mainform.switchToBloodDisorders) {
				Testing::BloodDisorders blooddisorders;
				blooddisorders.ShowDialog();

				if (blooddisorders.switchToMainForm) {
					continue;
				}
				
			}
			

			//Book a Visit
			if (mainform.switchToBookAVisit) {
				Testing::Visit bookavisit;
				bookavisit.ShowDialog();

				if (bookavisit.switchToMainForm) {
					continue;
				}
				
			}
			

			//Contact Us
			if (mainform.switchToContactUs) {
				Testing::ContactUs contactus;
				contactus.ShowDialog();

				if (contactus.switchToMainForm) {
					continue;
				}
				
			}
			

			////Compatibility
			if (mainform.switchToCompatibility) {
				Testing::Compatibility compatibility;
				compatibility.ShowDialog();

				if (compatibility.switchToDashboard) {
					continue;
				}
				
			}
			

			//Profile
			if (mainform.switchToProfile) {
				Testing::ProfileForm profile;
				profile.ShowDialog();

				if (profile.switchToDashboard) {
					continue;
				}
				
			}
			
		}
	}
	else {
		MessageBox::Show("Authentication Cancelled", "Program.cpp", MessageBoxButtons::OK);
	}
}