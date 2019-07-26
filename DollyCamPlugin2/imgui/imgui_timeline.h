#pragma once
namespace ImGui {

	bool BeginTimeline(const char* str_id, float max_time, float min_time = 0);
	bool TimelineMarker(const char* str_id, float& time);
	bool TimelineEvent(const char* str_id, float times[2]);
	void EndTimeline(float current_time = -1);

}

